
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct toshsd_host {int pdev; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct toshsd_host *VAR_7)
{

 FUNC_1(0xffffffff, VAR_7->ioaddr + VAR_3);

 FUNC_0(0x000, VAR_7->ioaddr + VAR_0 + VAR_1);
 FUNC_0(0, VAR_7->ioaddr + VAR_2);

 FUNC_2(VAR_7->pdev, VAR_5, VAR_6);

 FUNC_2(VAR_7->pdev, VAR_4, 0);
}
