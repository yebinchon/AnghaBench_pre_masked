
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rio_mport {int * riores; } ;
struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct resource*) ;
 struct resource* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,struct resource*) ;
 int FUNC_3 (struct resource*,int ,int ) ;
 int FUNC_4 (struct rio_mport*,void*,struct resource*,void (*) (struct rio_mport*,void*,int ,int ,int )) ;

int FUNC_5(struct rio_mport *VAR_3,
     void *VAR_4,
     u16 VAR_5,
     u16 VAR_6,
     void (*VAR_7) (struct rio_mport * VAR_8, void *VAR_9, u16 VAR_10,
     u16 VAR_11, u16 VAR_12))
{
 int VAR_13;
 struct resource *VAR_14 = FUNC_1(sizeof(*VAR_14), VAR_1);

 if (VAR_14) {
  FUNC_3(VAR_14, VAR_5, VAR_6);


  VAR_13 = FUNC_2(&VAR_3->riores[VAR_2],
          VAR_14);
  if (VAR_13 < 0) {
   FUNC_0(VAR_14);
   goto out;
  }


  VAR_13 = FUNC_4(VAR_3, VAR_4, VAR_14, VAR_7);
 } else
  VAR_13 = -VAR_0;

      out:
 return VAR_13;
}
