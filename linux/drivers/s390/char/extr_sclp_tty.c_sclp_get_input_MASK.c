
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gds_subvector {int length; } ;


 int FUNC_0 (unsigned char*,int) ;
 int FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_4(struct gds_subvector *VAR_1)
{
 unsigned char *VAR_2;
 int VAR_3;

 VAR_2 = (unsigned char *) (VAR_1 + 1);
 VAR_3 = VAR_1->length - sizeof(*VAR_1);
 if (VAR_0)
  FUNC_0(VAR_2, VAR_3);
 VAR_3 = FUNC_2(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_3);


 FUNC_3(VAR_2, VAR_3);
}
