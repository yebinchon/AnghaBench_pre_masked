
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hvsi_priv {size_t inbuf_len; int * inbuf; int termno; scalar_t__ (* get_chars ) (int ,int *,size_t) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct hvsi_priv*) ;
 scalar_t__ FUNC_1 (int ,int *,size_t) ;

__attribute__((used)) static int FUNC_2(struct hvsi_priv *VAR_1)
{

 if (VAR_1->inbuf_len < VAR_0)
  VAR_1->inbuf_len += VAR_1->get_chars(VAR_1->termno,
          &VAR_1->inbuf[VAR_1->inbuf_len],
          VAR_0 - VAR_1->inbuf_len);




 if (VAR_1->inbuf_len >= 4)
  return FUNC_0(VAR_1);
 return 0;
}
