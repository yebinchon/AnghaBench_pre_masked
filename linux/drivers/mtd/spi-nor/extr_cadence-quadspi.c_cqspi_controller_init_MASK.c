
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cqspi_st {int fifo_depth; int trigger_address; int fifo_width; scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct cqspi_st*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cqspi_st *VAR_8)
{
 u32 VAR_9;

 FUNC_0(VAR_8, 0);


 FUNC_2(0, VAR_8->iobase + VAR_6);


 FUNC_2(0, VAR_8->iobase + VAR_5);


 FUNC_2(VAR_8->fifo_depth / 2, VAR_8->iobase + VAR_7);


 FUNC_2(VAR_8->trigger_address,
        VAR_8->iobase + VAR_3);


 FUNC_2(VAR_8->fifo_depth * VAR_8->fifo_width / 2,
        VAR_8->iobase + VAR_2);

 FUNC_2(VAR_8->fifo_depth * VAR_8->fifo_width / 8,
        VAR_8->iobase + VAR_4);


 VAR_9 = FUNC_1(VAR_8->iobase + VAR_0);
 VAR_9 |= VAR_1;
 FUNC_2(VAR_9, VAR_8->iobase + VAR_0);

 FUNC_0(VAR_8, 1);
}
