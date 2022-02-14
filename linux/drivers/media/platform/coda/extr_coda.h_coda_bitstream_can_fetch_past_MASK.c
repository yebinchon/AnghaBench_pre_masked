
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ in; } ;
struct TYPE_4__ {TYPE_1__ kfifo; } ;
struct coda_ctx {TYPE_2__ bitstream_fifo; } ;


 scalar_t__ FUNC_0 (unsigned int,int) ;

__attribute__((used)) static inline bool FUNC_1(struct coda_ctx *VAR_0,
       unsigned int VAR_1)
{
 return (int)(VAR_0->bitstream_fifo.kfifo.in - FUNC_0(VAR_1, 256)) > 512;
}
