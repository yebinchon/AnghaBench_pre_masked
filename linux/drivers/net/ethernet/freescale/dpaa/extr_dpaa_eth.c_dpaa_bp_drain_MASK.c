
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dpaa_bp {int (* free_buf_cb ) (struct dpaa_bp*,struct bm_buffer*) ;int pool; } ;
struct bm_buffer {int dummy; } ;


 int FUNC_0 (int ,struct bm_buffer*,int) ;
 int FUNC_1 (struct dpaa_bp*,struct bm_buffer*) ;

__attribute__((used)) static void FUNC_2(struct dpaa_bp *VAR_0)
{
 u8 VAR_1 = 8;
 int VAR_2;

 do {
  struct bm_buffer VAR_3[8];
  int VAR_4;

  VAR_2 = FUNC_0(VAR_0->pool, VAR_3, VAR_1);
  if (VAR_2 < 0) {
   if (VAR_1 == 8) {



    VAR_1 = 1;
    VAR_2 = 1;
    continue;
   } else {

    break;
   }
  }

  if (VAR_0->free_buf_cb)
   for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
    VAR_0->free_buf_cb(VAR_0, &VAR_3[VAR_4]);
 } while (VAR_2 > 0);
}
