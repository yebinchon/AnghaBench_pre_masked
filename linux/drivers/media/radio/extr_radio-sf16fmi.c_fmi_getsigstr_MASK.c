
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fmi {int lock; int io; scalar_t__ mute; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static inline int FUNC_5(struct fmi *VAR_0)
{
 int VAR_1;
 int VAR_2;

 FUNC_2(&VAR_0->lock);
 VAR_1 = VAR_0->mute ? 0x00 : 0x08;
 FUNC_4(VAR_1, VAR_0->io);
 FUNC_4(VAR_1 | 0x10, VAR_0->io);
 FUNC_1(143);
 VAR_2 = (int)FUNC_0(VAR_0->io + 1);
 FUNC_4(VAR_1, VAR_0->io);

 FUNC_3(&VAR_0->lock);
 return (VAR_2 & 2) ? 0 : 0xFFFF;
}
