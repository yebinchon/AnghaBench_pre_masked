
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rc_device {int overclocking; int sample_mult; int sample_div; scalar_t__ rx_base; scalar_t__ base; int sys_clock; int rstc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct st_rc_device *VAR_5)
{
 int VAR_6, VAR_7;
 unsigned int VAR_8 = VAR_4;
 unsigned int VAR_9;


 FUNC_2(VAR_5->rstc);

 FUNC_1(VAR_5->sys_clock);
 VAR_6 = FUNC_0(VAR_5->sys_clock);


 FUNC_3(1, VAR_5->rx_base + VAR_1);

 VAR_9 = VAR_6 / VAR_2;
 FUNC_3(VAR_9, VAR_5->base + VAR_3);

 VAR_7 = VAR_6 - (VAR_9 * VAR_2);
 if (VAR_7) {
  VAR_5->overclocking = 1;
  VAR_5->sample_mult = 1000;
  VAR_5->sample_div = VAR_6 / (10000 * VAR_9);
  VAR_8 = (VAR_8 * 1000)/VAR_5->sample_div;
 }

 FUNC_3(VAR_8, VAR_5->rx_base + VAR_0);
}
