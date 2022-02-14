
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int time64_t ;
struct hwrm_ver_get_output {int dummy; } ;
struct coredump_segment_record {int segment_id; int component_id; } ;
struct bnxt_coredump_segment_hdr {int dummy; } ;
struct bnxt_coredump_record {int dummy; } ;
struct bnxt_coredump {int total_segs; scalar_t__ data; int * member_0; } ;
struct bnxt {int dev; struct bnxt_coredump_segment_hdr ver_resp; } ;
typedef int seg_hdr ;
struct TYPE_2__ {int tz_minuteswest; } ;


 int FUNC_0 (struct bnxt*,void*,int ,int,int,int) ;
 int FUNC_1 (struct bnxt*,struct bnxt_coredump_segment_hdr*,struct coredump_segment_record*,int,int,int,int ) ;
 int FUNC_2 (struct bnxt*,int,int) ;
 int FUNC_3 (struct bnxt*,struct bnxt_coredump*) ;
 int FUNC_4 (struct bnxt*,int,int,int*,void*,int) ;
 unsigned long VAR_0 ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 (void*,struct bnxt_coredump_segment_hdr*,int) ;
 int FUNC_10 (int ,char*,...) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_11(struct bnxt *VAR_2, void *VAR_3, u32 *VAR_4)
{
 u32 VAR_5 = sizeof(struct hwrm_ver_get_output);
 struct coredump_segment_record *VAR_6 = ((void*)0);
 u32 VAR_7 = 0, VAR_8, VAR_9;
 struct bnxt_coredump_segment_hdr VAR_10;
 struct bnxt_coredump VAR_11 = {((void*)0)};
 time64_t VAR_12;
 u16 VAR_13;
 int VAR_14 = 0, VAR_15;

 VAR_12 = FUNC_7();
 VAR_13 = VAR_1.tz_minuteswest * 60;
 VAR_8 = sizeof(VAR_10);


 *VAR_4 = VAR_8 + VAR_5;
 if (VAR_3) {
  FUNC_1(VAR_2, &VAR_10, ((void*)0), VAR_5,
        0, 0, 0);
  FUNC_9(VAR_3 + VAR_7, &VAR_10, VAR_8);
  VAR_7 += VAR_8;
  FUNC_9(VAR_3 + VAR_7, &VAR_2->ver_resp, VAR_5);
  VAR_7 += VAR_5;
 }

 VAR_14 = FUNC_3(VAR_2, &VAR_11);
 if (VAR_14) {
  FUNC_10(VAR_2->dev, "Failed to get coredump segment list\n");
  goto err;
 }

 *VAR_4 += VAR_8 * VAR_11.total_segs;

 VAR_6 = (struct coredump_segment_record *)VAR_11.data;
 VAR_9 = sizeof(*VAR_6);

 for (VAR_15 = 0; VAR_15 < VAR_11.total_segs; VAR_15++) {
  u16 VAR_16 = FUNC_8(VAR_6->component_id);
  u16 VAR_17 = FUNC_8(VAR_6->segment_id);
  u32 VAR_18 = 0, VAR_19 = 0;
  unsigned long VAR_20, VAR_21;

  VAR_20 = VAR_0;

  VAR_14 = FUNC_2(VAR_2, VAR_16, VAR_17);
  if (VAR_14) {
   FUNC_10(VAR_2->dev,
       "Failed to initiate coredump for seg = %d\n",
       VAR_6->segment_id);
   goto next_seg;
  }


  VAR_14 = FUNC_4(VAR_2, VAR_16, VAR_17,
           &VAR_19, VAR_3,
           VAR_7 + VAR_8);
  if (VAR_14)
   FUNC_10(VAR_2->dev,
       "Failed to retrieve coredump for seg = %d\n",
       VAR_6->segment_id);

next_seg:
  VAR_21 = VAR_0;
  VAR_18 = FUNC_5(VAR_21 - VAR_20);
  FUNC_1(VAR_2, &VAR_10, VAR_6, VAR_19,
        VAR_14, VAR_18, 0);

  if (VAR_3) {

   FUNC_9(VAR_3 + VAR_7, &VAR_10, VAR_8);
   VAR_7 += VAR_8 + VAR_19;
  }

  *VAR_4 += VAR_19;
  VAR_6 =
   (struct coredump_segment_record *)((u8 *)VAR_6 +
          VAR_9);
 }

err:
 if (VAR_3)
  FUNC_0(VAR_2, VAR_3 + VAR_7, VAR_12,
       VAR_13, VAR_11.total_segs + 1,
       VAR_14);
 FUNC_6(VAR_11.data);
 *VAR_4 += sizeof(struct bnxt_coredump_record);

 return VAR_14;
}
