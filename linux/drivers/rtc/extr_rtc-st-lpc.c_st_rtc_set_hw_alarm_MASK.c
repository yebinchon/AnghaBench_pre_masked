
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rtc {int lock; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct st_rtc *VAR_4,
    unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;

 FUNC_0(&VAR_4->lock, VAR_7);

 FUNC_2(1, VAR_4->ioaddr + VAR_3);

 FUNC_2(VAR_5, VAR_4->ioaddr + VAR_1);
 FUNC_2(VAR_6, VAR_4->ioaddr + VAR_0);
 FUNC_2(1, VAR_4->ioaddr + VAR_2);

 FUNC_2(0, VAR_4->ioaddr + VAR_3);

 FUNC_1(&VAR_4->lock, VAR_7);
}
