
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int dummy; } ;
struct hfi_buffer_count_actual {unsigned int count_actual; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct venus_inst*,int ,struct hfi_buffer_count_actual*) ;

int FUNC_1(struct venus_inst *VAR_4, unsigned int VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7)
{
 u32 VAR_8 = VAR_3;
 struct hfi_buffer_count_actual VAR_9;
 int VAR_10;

 VAR_9.type = VAR_0;
 VAR_9.count_actual = VAR_5;

 VAR_10 = FUNC_0(VAR_4, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_9.type = VAR_1;
 VAR_9.count_actual = VAR_6;

 VAR_10 = FUNC_0(VAR_4, VAR_8, &VAR_9);
 if (VAR_10)
  return VAR_10;

 if (VAR_7) {
  VAR_9.type = VAR_2;
  VAR_9.count_actual = VAR_7;

  VAR_10 = FUNC_0(VAR_4, VAR_8, &VAR_9);
 }

 return VAR_10;
}
