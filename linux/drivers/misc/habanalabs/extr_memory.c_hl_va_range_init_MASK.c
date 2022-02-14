
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hl_va_range {int start_addr; int end_addr; int list; } ;
struct hl_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hl_device*,struct hl_va_range*,int,int) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct hl_device *VAR_3,
  struct hl_va_range *VAR_4, u64 VAR_5, u64 VAR_6)
{
 int VAR_7;

 FUNC_0(&VAR_4->list);



 if (VAR_5 & (VAR_2 - 1)) {
  VAR_5 &= VAR_1;
  VAR_5 += VAR_2;
 }

 if (VAR_6 & (VAR_2 - 1))
  VAR_6 &= VAR_1;

 if (VAR_5 >= VAR_6) {
  FUNC_2(VAR_3->dev, "too small vm range for va list\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_7) {
  FUNC_2(VAR_3->dev, "Failed to init host va list\n");
  return VAR_7;
 }

 VAR_4->start_addr = VAR_5;
 VAR_4->end_addr = VAR_6;

 return 0;
}
