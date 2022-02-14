
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_frontend*,int*,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0,
       u32 * VAR_1, u32 * VAR_2,
       u16 * VAR_3)
{
 u32 VAR_4 = 0, VAR_5;
 u16 VAR_6 = 0;
 int VAR_7;

 VAR_7 =
     FUNC_0(VAR_0, &VAR_5, &VAR_4,
          &VAR_6);
 if (VAR_7)
  return VAR_7;
 *VAR_1 = VAR_5;
 *VAR_2 = VAR_4 * 204 * 8;
 *VAR_3 = VAR_6;

 return 0;
}
