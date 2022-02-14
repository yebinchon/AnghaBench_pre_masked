
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_lcdfb_info {TYPE_1__* config; } ;
struct TYPE_2__ {int have_hozval; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long FUNC_1 (struct atmel_lcdfb_info*,int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct atmel_lcdfb_info *VAR_9,
       unsigned long VAR_10)
{
 unsigned long VAR_11;
 unsigned long VAR_12;

 if (!VAR_9->config->have_hozval)
  return VAR_10;

 VAR_11 = FUNC_1(VAR_9, VAR_6);
 VAR_12 = VAR_10;
 if ((VAR_11 & VAR_0) != VAR_2) {

  if ((VAR_11 & VAR_0) == VAR_1) {
   VAR_12 *= 3;
  }
  if ( (VAR_11 & VAR_3) == VAR_4
     || ( (VAR_11 & VAR_3) == VAR_5
        && (VAR_11 & VAR_7) == VAR_8 ))
   VAR_12 = FUNC_0(VAR_12, 4);
  else
   VAR_12 = FUNC_0(VAR_12, 8);
 }

 return VAR_12;
}
