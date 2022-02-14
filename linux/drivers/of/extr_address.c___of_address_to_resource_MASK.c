
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct resource {unsigned int flags; char const* name; scalar_t__ end; scalar_t__ start; } ;
struct device_node {char const* full_name; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct resource*,int ,int) ;
 scalar_t__ FUNC_1 (struct device_node*,int const*) ;
 scalar_t__ FUNC_2 (struct device_node*,int const*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_4,
  const __be32 *VAR_5, u64 VAR_6, unsigned int VAR_7,
  const char *VAR_8, struct resource *VAR_9)
{
 u64 VAR_10;

 if (VAR_7 & VAR_2)
  VAR_10 = FUNC_1(VAR_4, VAR_5);
 else if (VAR_7 & VAR_1)
  VAR_10 = FUNC_2(VAR_4, VAR_5, VAR_6);
 else
  return -VAR_0;

 if (VAR_10 == VAR_3)
  return -VAR_0;
 FUNC_0(VAR_9, 0, sizeof(struct resource));

 VAR_9->start = VAR_10;
 VAR_9->end = VAR_10 + VAR_6 - 1;
 VAR_9->flags = VAR_7;
 VAR_9->name = VAR_8 ? VAR_8 : VAR_4->full_name;

 return 0;
}
