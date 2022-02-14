
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_pioqueue {int txtask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b43legacy_pioqueue*,int ) ;
 int FUNC_1 (struct b43legacy_pioqueue*,int ,int) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct b43legacy_pioqueue *VAR_2)
{
 FUNC_1(VAR_2, VAR_0,
       FUNC_0(VAR_2, VAR_0)
       & ~VAR_1);
 FUNC_2(VAR_2->dev, -1, -1);
 FUNC_3(&VAR_2->txtask);
}
