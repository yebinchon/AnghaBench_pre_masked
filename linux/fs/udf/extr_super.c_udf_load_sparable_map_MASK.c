
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct udf_sparing_data {struct buffer_head** s_spar_map; scalar_t__ s_packet_len; } ;
struct TYPE_3__ {struct udf_sparing_data s_sparing; } ;
struct udf_part_map {int s_partition_func; int s_partition_type; TYPE_1__ s_type_specific; } ;
struct super_block {scalar_t__ s_blocksize; } ;
struct TYPE_4__ {int ident; } ;
struct sparingTable {int reallocationTableLen; TYPE_2__ sparingIdent; } ;
struct sparablePartitionMap {int numSparingTables; int * locSparingTable; int packetLength; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct super_block*,char*,int) ;
 int VAR_3 ;
 struct buffer_head* FUNC_7 (struct super_block*,int ,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_4,
     struct udf_part_map *VAR_5,
     struct sparablePartitionMap *VAR_6)
{
 uint32_t VAR_7;
 uint16_t VAR_8;
 struct sparingTable *VAR_9;
 struct udf_sparing_data *VAR_10 = &VAR_5->s_type_specific.s_sparing;
 int VAR_11;
 struct buffer_head *VAR_12;

 VAR_5->s_partition_type = VAR_2;
 VAR_10->s_packet_len = FUNC_2(VAR_6->packetLength);
 if (!FUNC_1(VAR_10->s_packet_len)) {
  FUNC_6(VAR_4, "error loading logical volume descriptor: "
   "Invalid packet length %u\n",
   (unsigned)VAR_10->s_packet_len);
  return -VAR_0;
 }
 if (VAR_6->numSparingTables > 4) {
  FUNC_6(VAR_4, "error loading logical volume descriptor: "
   "Too many sparing tables (%d)\n",
   (int)VAR_6->numSparingTables);
  return -VAR_0;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6->numSparingTables; VAR_11++) {
  VAR_7 = FUNC_3(VAR_6->locSparingTable[VAR_11]);
  VAR_12 = FUNC_7(VAR_4, VAR_7, VAR_7, &VAR_8);
  if (!VAR_12)
   continue;

  VAR_9 = (struct sparingTable *)VAR_12->b_data;
  if (VAR_8 != 0 ||
      FUNC_5(VAR_9->sparingIdent.ident, VAR_1,
       FUNC_4(VAR_1)) ||
      sizeof(*VAR_9) + FUNC_2(VAR_9->reallocationTableLen) >
       VAR_4->s_blocksize) {
   FUNC_0(VAR_12);
   continue;
  }

  VAR_10->s_spar_map[VAR_11] = VAR_12;
 }
 VAR_5->s_partition_func = VAR_3;
 return 0;
}
