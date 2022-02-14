
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_end_io; } ;


 int VAR_0 ;
 struct bio* FUNC_0 (int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;

__attribute__((used)) static inline struct bio *FUNC_2(int VAR_2)
{
 struct bio *VAR_3;




 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3) {
  FUNC_1("PSCSI: bio_kmalloc() failed\n");
  return ((void*)0);
 }
 VAR_3->bi_end_io = VAR_1;

 return VAR_3;
}
