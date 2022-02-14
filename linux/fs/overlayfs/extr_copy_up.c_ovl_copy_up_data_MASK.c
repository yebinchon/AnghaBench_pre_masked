
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
struct file {int dummy; } ;
typedef size_t loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file*) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct file*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 size_t FUNC_3 (struct file*,int ,struct file*,int ,size_t,int ) ;
 long FUNC_4 (struct file*,size_t*,struct file*,size_t*,size_t,int ) ;
 int FUNC_5 (struct file*) ;
 struct file* FUNC_6 (struct path*,int) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct file*,int ) ;

__attribute__((used)) static int FUNC_9(struct path *VAR_8, struct path *VAR_9, loff_t VAR_10)
{
 struct file *VAR_11;
 struct file *VAR_12;
 loff_t VAR_13 = 0;
 loff_t VAR_14 = 0;
 loff_t VAR_15;
 int VAR_16 = 0;

 if (VAR_10 == 0)
  return 0;

 VAR_11 = FUNC_6(VAR_8, VAR_2 | VAR_3);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_12 = FUNC_6(VAR_9, VAR_2 | VAR_4);
 if (FUNC_0(VAR_12)) {
  VAR_16 = FUNC_1(VAR_12);
  goto out_fput;
 }


 VAR_15 = FUNC_3(VAR_11, 0, VAR_12, 0, VAR_10, 0);
 if (VAR_15 == VAR_10)
  goto out;



 while (VAR_10) {
  size_t VAR_17 = VAR_1;
  long VAR_18;

  if (VAR_10 < VAR_17)
   VAR_17 = VAR_10;

  if (FUNC_7(VAR_6, VAR_7)) {
   VAR_16 = -VAR_0;
   break;
  }

  VAR_18 = FUNC_4(VAR_11, &VAR_13,
      VAR_12, &VAR_14,
      VAR_17, VAR_5);
  if (VAR_18 <= 0) {
   VAR_16 = VAR_18;
   break;
  }
  FUNC_2(VAR_13 != VAR_14);

  VAR_10 -= VAR_18;
 }
out:
 if (!VAR_16)
  VAR_16 = FUNC_8(VAR_12, 0);
 FUNC_5(VAR_12);
out_fput:
 FUNC_5(VAR_11);
 return VAR_16;
}
