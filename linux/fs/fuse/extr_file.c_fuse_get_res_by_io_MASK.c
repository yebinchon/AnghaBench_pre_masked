
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_io_priv {scalar_t__ err; scalar_t__ bytes; scalar_t__ size; scalar_t__ write; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static ssize_t FUNC_0(struct fuse_io_priv *VAR_1)
{
 if (VAR_1->err)
  return VAR_1->err;

 if (VAR_1->bytes >= 0 && VAR_1->write)
  return -VAR_0;

 return VAR_1->bytes < 0 ? VAR_1->size : VAR_1->bytes;
}
