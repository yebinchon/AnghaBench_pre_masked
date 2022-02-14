
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monwrite_hdr {int mon_function; } ;
struct mon_private {struct mon_buf* current_buf; struct monwrite_hdr hdr; } ;
struct mon_buf {int diag_done; struct mon_buf* data; int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;



 int FUNC_1 (struct mon_buf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct monwrite_hdr*,struct mon_buf*,int ) ;

__attribute__((used)) static int FUNC_4(struct mon_private *VAR_3)
{
 struct monwrite_hdr *VAR_4 = &VAR_3->hdr;
 struct mon_buf *VAR_5 = VAR_3->current_buf;
 int VAR_6 = 0;

 switch (VAR_4->mon_function) {
 case 128:
  if (!VAR_5->diag_done) {
   VAR_6 = FUNC_3(VAR_4, VAR_5->data,
        VAR_2);
   VAR_5->diag_done = 1;
  }
  break;
 case 129:
  if (!VAR_5->diag_done) {
   VAR_6 = FUNC_3(VAR_4, VAR_5->data,
        VAR_1);
   VAR_5->diag_done = 1;
  }
  break;
 case 130:
  VAR_6 = FUNC_3(VAR_4, VAR_5->data,
       VAR_0);
  FUNC_2(&VAR_3->current_buf->list);
  FUNC_1(VAR_3->current_buf->data);
  FUNC_1(VAR_3->current_buf);
  VAR_3->current_buf = ((void*)0);
  break;
 default:

  FUNC_0();
 }
 return VAR_6;
}
