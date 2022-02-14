
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw3215_info {int port; int tlet; int empty_wait; int timer; struct raw3215_info* buffer; struct raw3215_info* inbuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct raw3215_info*) ;
 void* FUNC_2 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,int ,unsigned long) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct raw3215_info *FUNC_6(void)
{
 struct raw3215_info *VAR_6;

 VAR_6 = FUNC_2(sizeof(struct raw3215_info), VAR_1 | VAR_0);
 if (!VAR_6)
  return ((void*)0);

 VAR_6->buffer = FUNC_2(VAR_2, VAR_1 | VAR_0);
 VAR_6->inbuf = FUNC_2(VAR_3, VAR_1 | VAR_0);
 if (!VAR_6->buffer || !VAR_6->inbuf) {
  FUNC_1(VAR_6->inbuf);
  FUNC_1(VAR_6->buffer);
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 FUNC_4(&VAR_6->timer, VAR_4, 0);
 FUNC_0(&VAR_6->empty_wait);
 FUNC_3(&VAR_6->tlet, VAR_5, (unsigned long)VAR_6);
 FUNC_5(&VAR_6->port);

 return VAR_6;
}
