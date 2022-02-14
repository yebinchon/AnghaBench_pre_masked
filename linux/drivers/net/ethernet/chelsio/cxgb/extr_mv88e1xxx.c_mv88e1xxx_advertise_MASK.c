
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct cphy*,int ,int*) ;
 int FUNC_1 (struct cphy*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_18, unsigned int VAR_19)
{
 u32 VAR_20 = 0;

 if (VAR_19 &
     (VAR_1 | VAR_0)) {
  (void) FUNC_0(VAR_18, VAR_17, &VAR_20);
  VAR_20 &= ~(VAR_15 | VAR_14);
  if (VAR_19 & VAR_1)
   VAR_20 |= VAR_15;
  if (VAR_19 & VAR_0)
   VAR_20 |= VAR_14;
 }
 (void) FUNC_1(VAR_18, VAR_17, VAR_20);

 VAR_20 = 1;
 if (VAR_19 & VAR_5)
  VAR_20 |= VAR_11;
 if (VAR_19 & VAR_4)
  VAR_20 |= VAR_10;
 if (VAR_19 & VAR_3)
  VAR_20 |= VAR_9;
 if (VAR_19 & VAR_2)
  VAR_20 |= VAR_8;
 if (VAR_19 & VAR_7)
  VAR_20 |= VAR_12;
 if (VAR_19 & VAR_6)
  VAR_20 |= VAR_13;
 (void) FUNC_1(VAR_18, VAR_16, VAR_20);
 return 0;
}
