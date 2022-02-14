
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
union init_array_hdr {TYPE_3__ raw; } ;
typedef int u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int const* unzip_buf; struct qed_dev* cdev; } ;
struct qed_dev {TYPE_2__* fw_data; } ;
struct TYPE_4__ {int array_offset; } ;
struct init_write_op {int data; TYPE_1__ args; } ;
struct TYPE_5__ {int* arr_data; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*,int ,int) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int,int,int,int const*,int,int) ;
 int FUNC_5 (struct qed_hwfn*,int,int *,int,int *) ;

__attribute__((used)) static int FUNC_6(struct qed_hwfn *VAR_8,
         struct qed_ptt *VAR_9,
         struct init_write_op *VAR_10,
         bool VAR_11, bool VAR_12)
{
 u32 VAR_13 = FUNC_2(VAR_10->args.array_offset);
 u32 VAR_14 = FUNC_2(VAR_10->data);
 u32 VAR_15 = FUNC_1(VAR_14, VAR_6) << 2;

 u32 VAR_16, VAR_17, VAR_18, VAR_19;
 struct qed_dev *VAR_20 = VAR_8->cdev;
 union init_array_hdr *VAR_21;
 const u32 *VAR_22;
 int VAR_23 = 0;
 u32 VAR_24;

 VAR_22 = VAR_20->fw_data->arr_data;

 VAR_21 = (union init_array_hdr *)(VAR_22 + VAR_13);
 VAR_14 = FUNC_2(VAR_21->raw.data);
 switch (FUNC_1(VAR_14, VAR_3)) {
 case 128:
  VAR_16 = VAR_13 + 1;
  VAR_18 = FUNC_1(VAR_14,
          VAR_5);
  VAR_19 = VAR_7 * 4;
  FUNC_3(VAR_8->unzip_buf, 0, VAR_19);

  VAR_17 = FUNC_5(VAR_8, VAR_18,
         (u8 *)&VAR_22[VAR_16],
         VAR_19, (u8 *)VAR_8->unzip_buf);
  if (VAR_17) {
   VAR_23 = FUNC_4(VAR_8, VAR_9, VAR_15, 0,
       VAR_17,
       VAR_8->unzip_buf,
       VAR_11, VAR_12);
  } else {
   FUNC_0(VAR_8, "Failed to unzip dmae data\n");
   VAR_23 = -VAR_0;
  }
  break;
 case 130:
 {
  u32 VAR_25 = FUNC_1(VAR_14,
     VAR_2);
  u32 VAR_26;

  VAR_24 = FUNC_1(VAR_14, VAR_1);

  for (VAR_26 = 0; VAR_26 < VAR_25; VAR_26++, VAR_15 += VAR_24 << 2) {
   VAR_23 = FUNC_4(VAR_8, VAR_9, VAR_15,
       VAR_13 + 1,
       VAR_24, VAR_22,
       VAR_11, VAR_12);
   if (VAR_23)
    break;
  }
  break;
 }
 case 129:
  VAR_24 = FUNC_1(VAR_14, VAR_4);
  VAR_23 = FUNC_4(VAR_8, VAR_9, VAR_15,
      VAR_13 + 1,
      VAR_24, VAR_22,
      VAR_11, VAR_12);
  break;
 }

 return VAR_23;
}
