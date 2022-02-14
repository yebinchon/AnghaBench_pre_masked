
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {scalar_t__ ape_hb_jiffies; int ape_hb; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tg3*,int ,int ) ;
 int FUNC_1 (struct tg3*,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct tg3 *VAR_3,
       unsigned long VAR_4)
{

 if (!FUNC_1(VAR_3, VAR_0) ||
     FUNC_2(VAR_2, VAR_3->ape_hb_jiffies + VAR_4))
  return;

 FUNC_0(VAR_3, VAR_1, VAR_3->ape_hb++);
 VAR_3->ape_hb_jiffies = VAR_2;
}
