
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_sysc_ch {unsigned int chan_bit; scalar_t__ chan_offs; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const struct rcar_sysc_ch *VAR_9, bool VAR_10)
{
 unsigned int VAR_11, VAR_12;
 int VAR_13;

 if (VAR_10) {
  VAR_11 = VAR_6;
  VAR_12 = VAR_2;
 } else {
  VAR_11 = VAR_5;
  VAR_12 = VAR_1;
 }


 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
  if (FUNC_1(VAR_8 + VAR_3) & FUNC_0(VAR_11))
   break;
  FUNC_3(VAR_4);
 }

 if (VAR_13 == VAR_7)
  return -VAR_0;


 FUNC_2(FUNC_0(VAR_9->chan_bit),
    VAR_8 + VAR_9->chan_offs + VAR_12);

 return 0;
}
