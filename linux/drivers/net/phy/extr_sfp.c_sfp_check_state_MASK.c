
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {unsigned int state; int st_mutex; int dev; } ;


 unsigned int FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 int FUNC_1 (int ,char*,int ,int,int) ;
 int * VAR_12 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 unsigned int FUNC_6 (struct sfp*) ;
 int FUNC_7 (struct sfp*,int ) ;

__attribute__((used)) static void FUNC_8(struct sfp *VAR_13)
{
 unsigned int VAR_14, VAR_15, VAR_16;

 FUNC_2(&VAR_13->st_mutex);
 VAR_14 = FUNC_6(VAR_13);
 VAR_16 = VAR_14 ^ VAR_13->state;
 VAR_16 &= VAR_8 | VAR_7 | VAR_11;

 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
  if (VAR_16 & FUNC_0(VAR_15))
   FUNC_1(VAR_13->dev, "%s %u -> %u\n", VAR_12[VAR_15],
    !!(VAR_13->state & FUNC_0(VAR_15)), !!(VAR_14 & FUNC_0(VAR_15)));

 VAR_14 |= VAR_13->state & (VAR_10 | VAR_9);
 VAR_13->state = VAR_14;

 FUNC_4();
 if (VAR_16 & VAR_8)
  FUNC_7(VAR_13, VAR_14 & VAR_8 ?
    VAR_1 : VAR_4);

 if (VAR_16 & VAR_11)
  FUNC_7(VAR_13, VAR_14 & VAR_11 ?
    VAR_6 : VAR_5);

 if (VAR_16 & VAR_7)
  FUNC_7(VAR_13, VAR_14 & VAR_7 ?
    VAR_2 : VAR_3);
 FUNC_5();
 FUNC_3(&VAR_13->st_mutex);
}
