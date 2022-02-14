
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct nfp_flower_merge_check {int vals; } ;
struct nfp_fl_payload {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct nfp_fl_payload*,struct nfp_flower_merge_check*,int) ;
 int FUNC_2 (struct nfp_fl_payload*,struct nfp_flower_merge_check*,scalar_t__*,int*) ;

__attribute__((used)) static int
FUNC_3(struct nfp_fl_payload *VAR_3,
       struct nfp_fl_payload *VAR_4)
{





 struct nfp_flower_merge_check VAR_5, VAR_6;
 int VAR_7, VAR_8 = 0;
 u8 VAR_9 = 0;

 VAR_7 = FUNC_1(VAR_3, &VAR_5,
           1);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4, &VAR_6,
           0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_3, &VAR_5,
         &VAR_9, &VAR_8);
 if (VAR_7)
  return VAR_7;


 if (VAR_8 != 1 || VAR_9 != VAR_2)
  return -VAR_1;




 VAR_7 = FUNC_0(VAR_6.vals, VAR_6.vals,
       VAR_5.vals,
       sizeof(struct nfp_flower_merge_check) * 8);
 if (VAR_7)
  return -VAR_0;

 return 0;
}
