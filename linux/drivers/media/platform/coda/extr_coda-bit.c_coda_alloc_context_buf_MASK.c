
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coda_ctx {int debugfs_entry; int dev; } ;
struct coda_aux_buf {int dummy; } ;


 int FUNC_0 (int ,struct coda_aux_buf*,size_t,char const*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct coda_ctx *VAR_0,
      struct coda_aux_buf *VAR_1, size_t VAR_2,
      const char *VAR_3)
{
 return FUNC_0(VAR_0->dev, VAR_1, VAR_2, VAR_3, VAR_0->debugfs_entry);
}
