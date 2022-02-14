
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dpaa_fq {int fq_type; int wq; int fqid; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int,char*,int,...) ;

__attribute__((used)) static inline void FUNC_1(struct dpaa_fq *VAR_2, int VAR_3)
{
 switch (VAR_2->fq_type) {
 case 130:
 case 129:
  VAR_2->wq = 1;
  break;
 case 133:
 case 128:
  VAR_2->wq = 5;
  break;
 case 134:
 case 132:
  VAR_2->wq = 6;
  break;
 case 131:
  switch (VAR_3 / VAR_1) {
  case 0:

   VAR_2->wq = 6;
   break;
  case 1:

   VAR_2->wq = 2;
   break;
  case 2:

   VAR_2->wq = 1;
   break;
  case 3:

   VAR_2->wq = 0;
   break;
  default:
   FUNC_0(1, "Too many TX FQs: more than %d!\n",
        VAR_0);
  }
  break;
 default:
  FUNC_0(1, "Invalid FQ type %d for FQID %d!\n",
       VAR_2->fq_type, VAR_2->fqid);
 }
}
