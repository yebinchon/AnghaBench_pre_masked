
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ubifs_pad_node {void* pad_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_ch {void* crc; void* len; scalar_t__ sqnum; scalar_t__* padding; int group_type; int node_type; void* magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (struct ubifs_info const*,int) ;

void FUNC_4(const struct ubifs_info *VAR_6, void *VAR_7, int VAR_8)
{
 uint32_t VAR_9;

 FUNC_3(VAR_6, VAR_8 >= 0 && !(VAR_8 & 7));

 if (VAR_8 >= VAR_5) {
  struct ubifs_ch *VAR_10 = VAR_7;
  struct ubifs_pad_node *VAR_11 = VAR_7;

  VAR_10->magic = FUNC_0(VAR_1);
  VAR_10->node_type = VAR_4;
  VAR_10->group_type = VAR_2;
  VAR_10->padding[0] = VAR_10->padding[1] = 0;
  VAR_10->sqnum = 0;
  VAR_10->len = FUNC_0(VAR_5);
  VAR_8 -= VAR_5;
  VAR_11->pad_len = FUNC_0(VAR_8);
  VAR_9 = FUNC_1(VAR_0, VAR_7 + 8, VAR_5 - 8);
  VAR_10->crc = FUNC_0(VAR_9);
  FUNC_2(VAR_7 + VAR_5, 0, VAR_8);
 } else if (VAR_8 > 0)

  FUNC_2(VAR_7, VAR_3, VAR_8);
}
