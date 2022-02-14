
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tgid; int comm; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_1__* VAR_22 ;

__attribute__((used)) static u32 FUNC_1(unsigned int VAR_23)
{
 u32 VAR_24 = 0;

 if ((VAR_23 & VAR_1) == VAR_8)
  VAR_24 = VAR_17;
 else if ((VAR_23 & VAR_1) == VAR_11)
  VAR_24 = VAR_21;
 else if ((VAR_23 & VAR_1) == VAR_9)
  VAR_24 = VAR_18;

 if (VAR_23 & VAR_2) {
  VAR_24 |= VAR_12;
  if (VAR_23 & VAR_6)
   VAR_24 |= VAR_15;
 } else if (VAR_23 & VAR_6)
  FUNC_0(VAR_0, "Application %s pid %d has incorrectly set O_EXCL flag but not O_CREAT on file open. Ignoring O_EXCL\n",
    VAR_22->comm, VAR_22->tgid);

 if (VAR_23 & VAR_10)
  VAR_24 |= VAR_20;

 if (VAR_23 & VAR_5)
  VAR_24 |= VAR_19;
 if (VAR_23 & VAR_4)
  VAR_24 |= VAR_14;
 if (VAR_23 & VAR_7)
  VAR_24 |= VAR_16;
 if (VAR_23 & VAR_3)
  VAR_24 |= VAR_13;

 return VAR_24;
}
