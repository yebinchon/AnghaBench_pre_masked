
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenstore_domain_interface {scalar_t__ req_cons; scalar_t__ req_prod; int req; } ;
typedef scalar_t__ XENSTORE_RING_IDX ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 void* FUNC_1 (scalar_t__,scalar_t__,int ,unsigned int*) ;
 int FUNC_2 (void*,void const*,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_1 ;
 struct xenstore_domain_interface* VAR_2 ;

__attribute__((used)) static int FUNC_7(const void *VAR_3, unsigned int VAR_4)
{
 struct xenstore_domain_interface *VAR_5 = VAR_2;
 XENSTORE_RING_IDX VAR_6, VAR_7;
 unsigned int VAR_8 = 0;

 while (VAR_4 != 0) {
  void *VAR_9;
  unsigned int VAR_10;


  VAR_6 = VAR_5->req_cons;
  VAR_7 = VAR_5->req_prod;
  if (!FUNC_0(VAR_6, VAR_7)) {
   VAR_5->req_cons = VAR_5->req_prod = 0;
   return -VAR_0;
  }
  if (!FUNC_6())
   return VAR_8;


  FUNC_4();

  VAR_9 = FUNC_1(VAR_6, VAR_7, VAR_5->req, &VAR_10);
  if (VAR_10 == 0)
   continue;
  if (VAR_10 > VAR_4)
   VAR_10 = VAR_4;

  FUNC_2(VAR_9, VAR_3, VAR_10);
  VAR_3 += VAR_10;
  VAR_4 -= VAR_10;
  VAR_8 += VAR_10;


  FUNC_5();
  VAR_5->req_prod += VAR_10;


  if (VAR_7 <= VAR_5->req_cons)
   FUNC_3(VAR_1);
 }

 return VAR_8;
}
