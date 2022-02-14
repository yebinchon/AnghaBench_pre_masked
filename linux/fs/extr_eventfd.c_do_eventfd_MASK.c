
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eventfd_ctx {unsigned int count; int flags; int id; int wqh; int kref; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (char*,int *,struct eventfd_ctx*,int) ;
 int VAR_10 ;
 int FUNC_2 (struct eventfd_ctx*) ;
 int VAR_11 ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 struct eventfd_ctx* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(unsigned int VAR_12, int VAR_13)
{
 struct eventfd_ctx *VAR_14;
 int VAR_15;


 FUNC_0(VAR_0 != VAR_7);
 FUNC_0(VAR_2 != VAR_8);

 if (VAR_13 & ~VAR_1)
  return -VAR_4;

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_6);
 if (!VAR_14)
  return -VAR_5;

 FUNC_6(&VAR_14->kref);
 FUNC_4(&VAR_14->wqh);
 VAR_14->count = VAR_12;
 VAR_14->flags = VAR_13;
 VAR_14->id = FUNC_3(&VAR_11, 0, 0, VAR_6);

 VAR_15 = FUNC_1("[eventfd]", &VAR_10, VAR_14,
         VAR_9 | (VAR_13 & VAR_3));
 if (VAR_15 < 0)
  FUNC_2(VAR_14);

 return VAR_15;
}
