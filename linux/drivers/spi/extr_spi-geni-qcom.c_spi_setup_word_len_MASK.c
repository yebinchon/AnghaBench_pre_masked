
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;
struct geni_se {scalar_t__ base; } ;
struct spi_geni_master {unsigned int fifo_width_bits; struct geni_se se; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct geni_se*,unsigned int,unsigned int,int,int,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct spi_geni_master *VAR_4, u16 VAR_5,
     unsigned int VAR_6)
{
 unsigned int VAR_7;
 bool VAR_8 = (VAR_5 & VAR_2) ? 0 : 1;
 struct geni_se *VAR_9 = &VAR_4->se;
 u32 VAR_10;

 VAR_10 = FUNC_1(VAR_9->base + VAR_1);





 if (!(VAR_4->fifo_width_bits % VAR_6))
  VAR_7 = VAR_4->fifo_width_bits / VAR_6;
 else
  VAR_7 = 1;
 VAR_10 &= ~VAR_3;
 VAR_10 |= ((VAR_6 - VAR_0) & VAR_3);
 FUNC_0(&VAR_4->se, VAR_6, VAR_7, VAR_8,
        1, 1);
 FUNC_2(VAR_10, VAR_9->base + VAR_1);
}
