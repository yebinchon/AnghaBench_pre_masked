
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct hvterm_priv {unsigned long left; size_t offset; char* buf; int buf_lock; int termno; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned long FUNC_1 (int ,char*,int) ;
 struct hvterm_priv** VAR_0 ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char*,unsigned long) ;
 int FUNC_4 (int,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(uint32_t VAR_1, char *VAR_2, int VAR_3)
{
 struct hvterm_priv *VAR_4 = VAR_0[VAR_1];
 unsigned long VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (FUNC_0(!VAR_4))
  return 0;

 FUNC_5(&VAR_4->buf_lock, VAR_6);

 if (VAR_4->left == 0) {
  VAR_4->offset = 0;
  VAR_4->left = FUNC_1(VAR_4->termno, VAR_4->buf, VAR_3);





  for (VAR_5 = 1; VAR_5 < VAR_4->left; ++VAR_5) {
   if (VAR_4->buf[VAR_5] == 0 && VAR_4->buf[VAR_5-1] == '\r') {
    --VAR_4->left;
    if (VAR_5 < VAR_4->left) {
     FUNC_3(&VAR_4->buf[VAR_5], &VAR_4->buf[VAR_5+1],
      VAR_4->left - VAR_5);
    }
   }
  }
 }

 VAR_7 = FUNC_4(VAR_3, VAR_4->left);
 FUNC_2(VAR_2, &VAR_4->buf[VAR_4->offset], VAR_7);
 VAR_4->offset += VAR_7;
 VAR_4->left -= VAR_7;

 FUNC_6(&VAR_4->buf_lock, VAR_6);

 return VAR_7;
}
