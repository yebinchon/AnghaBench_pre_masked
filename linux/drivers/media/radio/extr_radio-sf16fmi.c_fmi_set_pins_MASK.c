
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fmi {int lock; int io; int mute; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_8, u8 VAR_9)
{
 struct fmi *VAR_10 = VAR_8;
 u8 VAR_11 = VAR_3;

 if (!VAR_10->mute)
  VAR_11 |= VAR_4;

 if (VAR_9 & VAR_7)
  VAR_11 |= VAR_2;
 if (VAR_9 & VAR_6)
  VAR_11 |= VAR_1;
 if (VAR_9 & VAR_5)
  VAR_11 |= VAR_0;

 FUNC_0(&VAR_10->lock);
 FUNC_2(VAR_11, VAR_10->io);
 FUNC_1(&VAR_10->lock);
}
