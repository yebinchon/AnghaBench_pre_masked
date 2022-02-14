
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_5__ {void const* out; } ;
struct TYPE_6__ {size_t nbytes; TYPE_1__ buf; } ;
struct TYPE_7__ {scalar_t__ val; } ;
struct spi_mem_op {TYPE_2__ data; TYPE_3__ addr; } ;
struct TYPE_8__ {scalar_t__ offset; struct spi_mem_op op_tmpl; } ;
struct spi_mem_dirmap_desc {int mem; TYPE_4__ info; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,struct spi_mem_op*) ;
 int FUNC_1 (int ,struct spi_mem_op*) ;

__attribute__((used)) static ssize_t FUNC_2(struct spi_mem_dirmap_desc *VAR_0,
           u64 VAR_1, size_t VAR_2, const void *VAR_3)
{
 struct spi_mem_op VAR_4 = VAR_0->info.op_tmpl;
 int VAR_5;

 VAR_4.addr.val = VAR_0->info.offset + VAR_1;
 VAR_4.data.buf.out = VAR_3;
 VAR_4.data.nbytes = VAR_2;
 VAR_5 = FUNC_0(VAR_0->mem, &VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_0->mem, &VAR_4);
 if (VAR_5)
  return VAR_5;

 return VAR_4.data.nbytes;
}
