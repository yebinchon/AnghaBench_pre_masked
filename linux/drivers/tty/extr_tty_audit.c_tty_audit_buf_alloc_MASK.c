
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_audit_buf {scalar_t__ valid; scalar_t__ icanon; int dev; int mutex; void* data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct tty_audit_buf*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct tty_audit_buf *FUNC_4(void)
{
 struct tty_audit_buf *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  goto err;
 VAR_2->data = FUNC_2(VAR_1, VAR_0);
 if (!VAR_2->data)
  goto err_buf;
 FUNC_3(&VAR_2->mutex);
 VAR_2->dev = FUNC_0(0, 0);
 VAR_2->icanon = 0;
 VAR_2->valid = 0;
 return VAR_2;

err_buf:
 FUNC_1(VAR_2);
err:
 return ((void*)0);
}
