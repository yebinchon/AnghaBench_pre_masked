
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qdio_q {unsigned int first_to_check; unsigned int qdio_error; scalar_t__ is_input_q; } ;


 unsigned int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct qdio_q*,unsigned int) ;
 int FUNC_2 (struct qdio_q*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct qdio_q *VAR_0, unsigned int *VAR_1,
    unsigned int *VAR_2)
{
 unsigned int VAR_3 = VAR_0->first_to_check;
 int VAR_4;

 VAR_4 = VAR_0->is_input_q ? FUNC_1(VAR_0, VAR_3) :
    FUNC_2(VAR_0, VAR_3);
 if (VAR_4 == 0)
  return 0;

 *VAR_1 = VAR_3;
 *VAR_2 = VAR_0->qdio_error;


 VAR_0->first_to_check = FUNC_0(VAR_3, VAR_4);
 VAR_0->qdio_error = 0;

 return VAR_4;
}
