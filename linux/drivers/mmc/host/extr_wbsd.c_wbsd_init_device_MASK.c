
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wbsd_host {scalar_t__ base; int flags; void* clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 void* FUNC_2 (struct wbsd_host*,int ) ;
 int FUNC_3 (struct wbsd_host*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct wbsd_host *VAR_18)
{
 u8 VAR_19, VAR_20;




 VAR_19 = FUNC_2(VAR_18, VAR_13);
 VAR_19 |= VAR_10 | VAR_17;
 FUNC_3(VAR_18, VAR_13, VAR_19);




 VAR_19 &= ~VAR_2;
 FUNC_3(VAR_18, VAR_13, VAR_19);
 VAR_18->flags &= ~VAR_11;




 VAR_18->clk = FUNC_2(VAR_18, VAR_12);




 FUNC_1(VAR_16, VAR_18->base + VAR_1);




 FUNC_3(VAR_18, VAR_14, 0x7F);




 if (FUNC_0(VAR_18->base + VAR_1) & VAR_0)
  VAR_18->flags |= VAR_9;
 else
  VAR_18->flags &= ~VAR_9;




 VAR_20 = 0;
 VAR_20 |= VAR_3;
 VAR_20 |= VAR_5;
 VAR_20 |= VAR_4;
 VAR_20 |= VAR_7;
 VAR_20 |= VAR_6;

 FUNC_1(VAR_20, VAR_18->base + VAR_8);




 FUNC_0(VAR_18->base + VAR_15);
}
