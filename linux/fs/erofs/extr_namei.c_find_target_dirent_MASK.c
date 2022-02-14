
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct erofs_qstr {int * end; int * name; } ;
struct erofs_dirent {int nameoff; } ;


 int VAR_0 ;
 struct erofs_dirent* FUNC_0 (int ) ;
 int FUNC_1 (struct erofs_qstr*,struct erofs_qstr*,unsigned int*) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static struct erofs_dirent *FUNC_4(struct erofs_qstr *VAR_1,
            u8 *VAR_2,
            unsigned int VAR_3,
            const int VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8;
 struct erofs_dirent *const VAR_9 = (struct erofs_dirent *)VAR_2;


 VAR_5 = 1;
 VAR_6 = VAR_4 - 1;
 VAR_7 = VAR_8 = 0;

 while (VAR_5 <= VAR_6) {
  const int VAR_10 = VAR_5 + (VAR_6 - VAR_5) / 2;
  const int VAR_11 = FUNC_3(VAR_9[VAR_10].nameoff,
            VAR_3);
  unsigned int VAR_12 = FUNC_2(VAR_7, VAR_8);
  struct erofs_qstr VAR_13 = {
   .name = VAR_2 + VAR_11,
   .end = VAR_10 >= VAR_4 - 1 ?
    VAR_2 + VAR_3 :
    VAR_2 + FUNC_3(VAR_9[VAR_10 + 1].nameoff,
        VAR_3)
  };


  int VAR_14 = FUNC_1(VAR_1, &VAR_13, &VAR_12);

  if (!VAR_14) {
   return VAR_9 + VAR_10;
  } else if (VAR_14 > 0) {
   VAR_5 = VAR_10 + 1;
   VAR_7 = VAR_12;
  } else {
   VAR_6 = VAR_10 - 1;
   VAR_8 = VAR_12;
  }
 }

 return FUNC_0(-VAR_0);
}
