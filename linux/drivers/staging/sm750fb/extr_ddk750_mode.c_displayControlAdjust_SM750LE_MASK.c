
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mode_parameter {unsigned long horizontal_display_end; unsigned long vertical_display_end; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_1(struct mode_parameter *VAR_16,
        unsigned long VAR_17)
{
 unsigned long VAR_18, VAR_19;

 VAR_18 = VAR_16->horizontal_display_end;
 VAR_19 = VAR_16->vertical_display_end;







 FUNC_0(VAR_4, 0);

 FUNC_0(VAR_0,
        (((VAR_19 - 1) << VAR_2) &
  VAR_1) |
        ((VAR_18 - 1) & VAR_3));
 VAR_17 &= ~VAR_6;



 if (VAR_18 == 800 && VAR_19 == 600)
  VAR_17 |= VAR_9;
 else if (VAR_18 == 1024 && VAR_19 == 768)
  VAR_17 |= VAR_10;
 else if (VAR_18 == 1152 && VAR_19 == 864)
  VAR_17 |= VAR_12;
 else if (VAR_18 == 1280 && VAR_19 == 768)
  VAR_17 |= VAR_12;
 else if (VAR_18 == 1280 && VAR_19 == 720)
  VAR_17 |= VAR_11;
 else if (VAR_18 == 1280 && VAR_19 == 960)
  VAR_17 |= VAR_7;
 else if (VAR_18 == 1280 && VAR_19 == 1024)
  VAR_17 |= VAR_7;
 else
  VAR_17 |= VAR_8;


 VAR_17 |= (VAR_13 | VAR_14);


 VAR_17 |= VAR_15;

 FUNC_0(VAR_5, VAR_17);

 return VAR_17;
}
