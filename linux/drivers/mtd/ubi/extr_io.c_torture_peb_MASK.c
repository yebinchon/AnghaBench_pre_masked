
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_device {int buf_mutex; int peb_size; int peb_buf; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ubi_device*,int) ;
 int FUNC_2 (int ,int,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int* VAR_2 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (struct ubi_device*,char*,int,...) ;
 int FUNC_9 (struct ubi_device*,int ,int,int ,int ) ;
 int FUNC_10 (struct ubi_device*,int ,int,int ,int ) ;
 int FUNC_11 (struct ubi_device*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct ubi_device *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 FUNC_11(VAR_3, "run torture test for PEB %d", VAR_4);
 VAR_7 = FUNC_0(VAR_2);
 FUNC_6(VAR_7 > 0);

 FUNC_4(&VAR_3->buf_mutex);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = FUNC_1(VAR_3, VAR_4);
  if (VAR_5)
   goto out;


  VAR_5 = FUNC_9(VAR_3, VAR_3->peb_buf, VAR_4, 0, VAR_3->peb_size);
  if (VAR_5)
   goto out;

  VAR_5 = FUNC_7(VAR_3->peb_buf, 0xFF, VAR_3->peb_size);
  if (VAR_5 == 0) {
   FUNC_8(VAR_3, "erased PEB %d, but a non-0xFF byte found",
    VAR_4);
   VAR_5 = -VAR_0;
   goto out;
  }


  FUNC_2(VAR_3->peb_buf, VAR_2[VAR_6], VAR_3->peb_size);
  VAR_5 = FUNC_10(VAR_3, VAR_3->peb_buf, VAR_4, 0, VAR_3->peb_size);
  if (VAR_5)
   goto out;

  FUNC_2(VAR_3->peb_buf, ~VAR_2[VAR_6], VAR_3->peb_size);
  VAR_5 = FUNC_9(VAR_3, VAR_3->peb_buf, VAR_4, 0, VAR_3->peb_size);
  if (VAR_5)
   goto out;

  VAR_5 = FUNC_7(VAR_3->peb_buf, VAR_2[VAR_6],
     VAR_3->peb_size);
  if (VAR_5 == 0) {
   FUNC_8(VAR_3, "pattern %x checking failed for PEB %d",
    VAR_2[VAR_6], VAR_4);
   VAR_5 = -VAR_0;
   goto out;
  }
 }

 VAR_5 = VAR_7;
 FUNC_11(VAR_3, "PEB %d passed torture test, do not mark it as bad", VAR_4);

out:
 FUNC_5(&VAR_3->buf_mutex);
 if (VAR_5 == VAR_1 || FUNC_3(VAR_5)) {





  FUNC_8(VAR_3, "read problems on freshly erased PEB %d, must be bad",
   VAR_4);
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
