
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_qdio_req {scalar_t__ sbal_number; int sbtype; scalar_t__ sbale_curr; int sbal_last; int sbal_limit; } ;
struct zfcp_qdio {int dummy; } ;
struct qdio_buffer_element {int sflags; int eflags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct qdio_buffer_element* FUNC_1 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;
 struct qdio_buffer_element* FUNC_2 (struct zfcp_qdio*,struct zfcp_qdio_req*) ;

__attribute__((used)) static struct qdio_buffer_element *
FUNC_3(struct zfcp_qdio *VAR_4, struct zfcp_qdio_req *VAR_5)
{
 struct qdio_buffer_element *VAR_6;


 VAR_6 = FUNC_1(VAR_4, VAR_5);
 VAR_6->eflags |= VAR_1;


 if (VAR_5->sbal_last == VAR_5->sbal_limit)
  return ((void*)0);


 VAR_6 = FUNC_2(VAR_4, VAR_5);
 VAR_6->sflags |= VAR_2;


 VAR_5->sbal_last++;
 VAR_5->sbal_last %= VAR_0;


 VAR_5->sbal_number++;
 FUNC_0(VAR_5->sbal_number > VAR_3);


 VAR_5->sbale_curr = 0;


 VAR_6 = FUNC_1(VAR_4, VAR_5);
 VAR_6->sflags |= VAR_5->sbtype;

 return VAR_6;
}
