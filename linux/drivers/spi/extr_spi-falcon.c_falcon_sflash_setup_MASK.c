
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {unsigned int max_speed_hz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct spi_device *VAR_21)
{
 unsigned int VAR_22;
 unsigned long VAR_23;

 FUNC_3(&VAR_20, VAR_23);

 if (VAR_21->max_speed_hz >= VAR_5) {

  FUNC_2(0, VAR_8, VAR_7);
  VAR_22 = 1;
 } else {

  FUNC_2(VAR_8, 0, VAR_7);


  for (VAR_22 = 1; VAR_22 < 7; VAR_22++) {
   if (VAR_6 / VAR_22 <= VAR_21->max_speed_hz)
    break;
  }
 }


 FUNC_1(VAR_15
       | VAR_16
       | VAR_18,
       (VAR_22 << VAR_17)
       | (VAR_22 << (VAR_19 + 1)),
       VAR_14);





 FUNC_0((VAR_13 & (0x8 | 0x4)), VAR_12);

 FUNC_0(VAR_1 | VAR_2,
   VAR_0);
 FUNC_0(VAR_4, VAR_3);

 FUNC_1(VAR_11, VAR_10, VAR_9);

 FUNC_4(&VAR_20, VAR_23);

 return 0;
}
