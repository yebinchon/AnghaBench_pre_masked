
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_bp {int (* free_buf_cb ) (struct dpaa_bp const*,struct bm_buffer*) ;int pool; } ;
struct bm_buffer {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct bm_buffer*,int) ;
 int FUNC_2 (struct dpaa_bp const*,struct bm_buffer*) ;

__attribute__((used)) static int FUNC_3(const struct dpaa_bp *VAR_0,
        struct bm_buffer *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->pool, VAR_1, VAR_2);

 if (FUNC_0(VAR_3) && VAR_0->free_buf_cb)
  while (VAR_2-- > 0)
   VAR_0->free_buf_cb(VAR_0, &VAR_1[VAR_2]);

 return VAR_2;
}
