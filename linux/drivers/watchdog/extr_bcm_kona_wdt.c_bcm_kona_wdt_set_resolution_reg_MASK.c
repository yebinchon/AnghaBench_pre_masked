
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_kona_wdt {int resolution; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bcm_kona_wdt*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct bcm_kona_wdt *VAR_4)
{
 if (VAR_4->resolution > VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3,
     VAR_4->resolution << VAR_1);
}
