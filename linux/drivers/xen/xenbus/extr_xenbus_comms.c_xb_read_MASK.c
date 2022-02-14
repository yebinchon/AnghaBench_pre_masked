
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ rsp_cons; scalar_t__ rsp_prod; int rsp; } ;
typedef scalar_t__ XENSTORE_RING_IDX ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 char* FUNC_1 (scalar_t__,scalar_t__,int ,unsigned int*) ;
 int FUNC_2 (void*,char const*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_2 ;
 struct xenstore_domain_interface* VAR_3 ;

__attribute__((used)) static int FUNC_6(void *VAR_4, unsigned int VAR_5)
{
 struct xenstore_domain_interface *VAR_6 = VAR_3;
 XENSTORE_RING_IDX VAR_7, VAR_8;
 unsigned int VAR_9 = 0;

 while (VAR_5 != 0) {
  unsigned int VAR_10;
  const char *VAR_11;


  VAR_7 = VAR_6->rsp_cons;
  VAR_8 = VAR_6->rsp_prod;
  if (VAR_7 == VAR_8)
   return VAR_9;

  if (!FUNC_0(VAR_7, VAR_8)) {
   VAR_6->rsp_cons = VAR_6->rsp_prod = 0;
   return -VAR_0;
  }

  VAR_11 = FUNC_1(VAR_7, VAR_8, VAR_6->rsp, &VAR_10);
  if (VAR_10 == 0)
   continue;
  if (VAR_10 > VAR_5)
   VAR_10 = VAR_5;


  FUNC_5();

  FUNC_2(VAR_4, VAR_11, VAR_10);
  VAR_4 += VAR_10;
  VAR_5 -= VAR_10;
  VAR_9 += VAR_10;


  FUNC_4();
  VAR_6->rsp_cons += VAR_10;


  if (VAR_6->rsp_prod - VAR_7 >= VAR_1)
   FUNC_3(VAR_2);
 }

 return VAR_9;
}
