
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxgbi_sock {int state; int lock; int tid; int flags; } ;


 int VAR_0 ;



 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cxgbi_sock*) ;
 int FUNC_1 (struct cxgbi_sock*) ;
 scalar_t__ FUNC_2 (struct cxgbi_sock*,int ) ;
 int FUNC_3 (struct cxgbi_sock*) ;
 int FUNC_4 (struct cxgbi_sock*) ;
 int FUNC_5 (struct cxgbi_sock*,int ) ;
 int FUNC_6 (int,char*,struct cxgbi_sock*,int,int ,int ) ;
 int FUNC_7 (char*,struct cxgbi_sock*,int,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(struct cxgbi_sock *VAR_4)
{
 FUNC_6(1 << VAR_3, "csk 0x%p,%u,0x%lx,%u.\n",
  VAR_4, (VAR_4)->state, (VAR_4)->flags, (VAR_4)->tid);
 FUNC_3(VAR_4);
 FUNC_8(&VAR_4->lock);

 if (FUNC_2(VAR_4, VAR_0))
  goto done;

 switch (VAR_4->state) {
 case 128:
  FUNC_5(VAR_4, VAR_2);
  break;
 case 130:
  FUNC_5(VAR_4, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_4);
  break;
 case 131:
  break;
 default:
  FUNC_7("csk 0x%p,%u,0x%lx,%u, bad state.\n",
   VAR_4, VAR_4->state, VAR_4->flags, VAR_4->tid);
 }
 FUNC_0(VAR_4);
done:
 FUNC_9(&VAR_4->lock);
 FUNC_4(VAR_4);
}
