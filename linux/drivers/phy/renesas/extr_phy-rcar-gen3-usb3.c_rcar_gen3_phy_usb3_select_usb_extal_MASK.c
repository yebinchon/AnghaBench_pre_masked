
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_usb3 {scalar_t__ base; scalar_t__ ssc_range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct rcar_gen3_usb3*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct rcar_gen3_usb3*,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct rcar_gen3_usb3 *VAR_5)
{
 FUNC_2(VAR_5, 0);
 if (VAR_5->ssc_range)
  FUNC_0(VAR_5);
 FUNC_3(VAR_0 | VAR_1,
        VAR_5->base + VAR_3);
 FUNC_3(VAR_2, VAR_5->base + VAR_4);
 FUNC_2(VAR_5, 1);
 FUNC_1(10, 20);
 FUNC_2(VAR_5, 0);
}
