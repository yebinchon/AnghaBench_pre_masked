
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m {int * bm_cmd_buf; int * bm_ack_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int ,int ) ;

__attribute__((used)) static
int FUNC_2(struct i2400m *VAR_4)
{
 int VAR_5;

 VAR_5 = -VAR_0;
 VAR_4->bm_cmd_buf = FUNC_1(VAR_3, VAR_1);
 if (VAR_4->bm_cmd_buf == ((void*)0))
  goto error_bm_cmd_kzalloc;
 VAR_4->bm_ack_buf = FUNC_1(VAR_2, VAR_1);
 if (VAR_4->bm_ack_buf == ((void*)0))
  goto error_bm_ack_buf_kzalloc;
 return 0;

error_bm_ack_buf_kzalloc:
 FUNC_0(VAR_4->bm_cmd_buf);
error_bm_cmd_kzalloc:
 return VAR_5;
}
