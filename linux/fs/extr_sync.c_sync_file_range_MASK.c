
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct file {struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ s64 ;
typedef int pgoff_t ;
typedef int loff_t ;
struct TYPE_2__ {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct address_space*,int,int,int) ;
 int FUNC_5 (struct file*,int,int) ;
 TYPE_1__* FUNC_6 (struct file*) ;

int FUNC_7(struct file *VAR_11, loff_t VAR_12, loff_t VAR_13,
      unsigned int VAR_14)
{
 int VAR_15;
 struct address_space *VAR_16;
 loff_t VAR_17;
 umode_t VAR_18;

 VAR_15 = -VAR_0;
 if (VAR_14 & ~VAR_8)
  goto out;

 VAR_17 = VAR_12 + VAR_13;

 if ((s64)VAR_12 < 0)
  goto out;
 if ((s64)VAR_17 < 0)
  goto out;
 if (VAR_17 < VAR_12)
  goto out;

 if (sizeof(pgoff_t) == 4) {
  if (VAR_12 >= (0x100000000ULL << VAR_3)) {




   VAR_15 = 0;
   goto out;
  }
  if (VAR_17 >= (0x100000000ULL << VAR_3)) {



   VAR_13 = 0;
  }
 }

 if (VAR_13 == 0)
  VAR_17 = VAR_2;
 else
  VAR_17--;

 VAR_18 = FUNC_6(VAR_11)->i_mode;
 VAR_15 = -VAR_1;
 if (!FUNC_3(VAR_18) && !FUNC_0(VAR_18) && !FUNC_1(VAR_18) &&
   !FUNC_2(VAR_18))
  goto out;

 VAR_16 = VAR_11->f_mapping;
 VAR_15 = 0;
 if (VAR_14 & VAR_5) {
  VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_17);
  if (VAR_15 < 0)
   goto out;
 }

 if (VAR_14 & VAR_6) {
  int VAR_19 = VAR_10;

  if ((VAR_14 & VAR_7) ==
        VAR_7)
   VAR_19 = VAR_9;

  VAR_15 = FUNC_4(VAR_16, VAR_12, VAR_17,
       VAR_19);
  if (VAR_15 < 0)
   goto out;
 }

 if (VAR_14 & VAR_4)
  VAR_15 = FUNC_5(VAR_11, VAR_12, VAR_17);

out:
 return VAR_15;
}
