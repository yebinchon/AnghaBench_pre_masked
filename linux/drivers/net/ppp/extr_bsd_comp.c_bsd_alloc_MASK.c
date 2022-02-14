
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bsd_dict {int dummy; } ;
struct bsd_db {int totlen; unsigned int hsize; unsigned int hshift; unsigned int maxmaxcode; int maxbits; int * lens; void* dict; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned int) ;
 int FUNC_4 (struct bsd_db*) ;
 struct bsd_db* FUNC_5 (int,int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static void *FUNC_7 (unsigned char *VAR_3, int VAR_4, int VAR_5)
  {
    int VAR_6;
    unsigned int VAR_7, VAR_8, VAR_9;
    struct bsd_db *VAR_10;

    if (VAR_4 != 3 || VAR_3[0] != VAR_1 || VAR_3[1] != 3
 || FUNC_1(VAR_3[2]) != VAR_0)
      {
 return ((void*)0);
      }

    VAR_6 = FUNC_0(VAR_3[2]);

    switch (VAR_6)
      {
    case 9:
    case 10:
    case 11:
    case 12:
 VAR_7 = 5003;
 VAR_8 = 4;
 break;
    case 13:
 VAR_7 = 9001;
 VAR_8 = 5;
 break;
    case 14:
 VAR_7 = 18013;
 VAR_8 = 6;
 break;
    case 15:
 VAR_7 = 35023;
 VAR_8 = 7;
 break;
    case 16:



    default:
 return ((void*)0);
      }



    VAR_9 = FUNC_2(VAR_6);
    VAR_10 = FUNC_5(sizeof (struct bsd_db),
         VAR_2);
    if (!VAR_10)
      {
 return ((void*)0);
      }





    VAR_10->dict = FUNC_6(FUNC_3(VAR_7, sizeof(struct bsd_dict)));
    if (!VAR_10->dict)
      {
 FUNC_4 (VAR_10);
 return ((void*)0);
      }




    if (!VAR_5)
      {
 VAR_10->lens = ((void*)0);
      }



    else
      {
        VAR_10->lens = FUNC_6(FUNC_3(sizeof(VAR_10->lens[0]), (VAR_9 + 1)));
 if (!VAR_10->lens)
   {
     FUNC_4 (VAR_10);
     return ((void*)0);
   }
      }



    VAR_10->totlen = sizeof (struct bsd_db) +
            (sizeof (struct bsd_dict) * VAR_7);

    VAR_10->hsize = VAR_7;
    VAR_10->hshift = VAR_8;
    VAR_10->maxmaxcode = VAR_9;
    VAR_10->maxbits = VAR_6;

    return (void *) VAR_10;
  }
